import json
import boto3
from datetime import datetime
from decimal import Decimal

dynamodb = boto3.resource('dynamodb')

def lambda_handler(event, context):
    table = dynamodb.Table('iotdata')  

    temperature = Decimal(str(event['temperature']))
    humidity = Decimal(str(event['humidity']))
    timestamp = datetime.now().strftime('%Y-%m-%d %H:%M:%S')

    # Include SensorID in the item
    response = table.put_item(
       Item={
            'SensorID': 'ESP32_DHT11',  
            'Timestamp': timestamp,
            'Temperature': temperature,
            'Humidity': humidity
        }
    )

    return {
        'statusCode': 200,
        'body': json.dumps('Data inserted into DynamoDB')
    }
