/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: jwil9706
 */

#include "NodeController.h"

NodeController::NodeController()
{
//  this->intNode.setValue(5);
//  this->stringArrayNode.setValue("words are fun");
//  this->otherArrayNodel.stValue("linked node");
//  stringArrayNode.setNext(&otherArrayNode);
	myStringArray = new CTECArray<string>(5);
	CTECArray<int> derp(2);
	CTECArray<string> otherDerp(3);
}

NodeController::~NodeController()
{
	// TODO Auto-generated destructor stub
}

void NodeController :: start()
{
//	cout << intNode.getValue() << endl;
//	cout << stringArrayNode.getValue() << endl;
	string first = "first";
	string second = "not second";
	string third = "trois";
	string fourth = "yon";
	string fifth = "cing";

	myStringArray->set(0, first);
	cout << myStringArray->get(0) << endl;
	myStringArray->set(0, second);
	myStringArray->set(0, third);
	myStringArray->set(0, fourth);
	myStringArray->set(0, fifth);

	for(int index = 0; index < myStringArray->getSize(); index++)
	{
		cout << "The contents at " << index << " are: " << myStringArray->get(index) << endl;
	}
}
