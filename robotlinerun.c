#pragma config(Sensor, S1,     rightSensor,          sensorLightActive)
#pragma config(Sensor, S2,     middleR,        sensorColorNxtRED)
#pragma config(Sensor, S4,     leftSensor,           sensorLightActive)
#pragma config(Motor,  motorA,          rightM,         tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          leftM,          tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

int speedL=15;
int speedR=15;

int turnspeedL=-15;
int turnspeedR=-15;

while(true){

int left1=SensorValue(leftSensor);
int right1=SensorValue(rightSensor);


if(SensorValue(leftSensor)>43 && SensorValue(rightSensor)>43){
	motor[leftM]=speedL;
	motor[rightM]=speedR;

}
if(SensorValue(leftSensor)<43 && SensorValue(rightSensor)>43){
int left1=SensorValue(leftSensor);
int right1=SensorValue(rightSensor);

		while(SensorValue(leftSensor)<43 && SensorValue(rightSensor)>43){
			motor[leftM]=turnspeedL;
			motor[rightM]=speedR;

			left1=SensorValue(leftSensor);
			right1=SensorValue(rightSensor);
		}
}

if(SensorValue(leftSensor)>43 && SensorValue(rightSensor)<43){

	int left1=SensorValue(leftSensor);
	int right1=SensorValue(rightSensor);

		while(SensorValue(leftSensor)>43 && SensorValue(rightSensor)<43){
				motor[leftM]=speedL;
				motor[rightM]=turnspeedR;

				left1=SensorValue(leftSensor);
				right1=SensorValue(rightSensor);
						}
				}
		}
}
