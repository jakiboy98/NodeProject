/*
 * CTECArray.h
 *
 *  Created on: Feb 2, 2016
 *      Author: jwil9706
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_

template <class Type>
class CTECArray
{
private:
	int size;
	ArrayNode<Type> * head;
public:
	CTECArray(int size);
	virtual ~CTECArray();
	int getSize();
	Type* get(int position);
	void set(int position, Type value);
};

#endif /* MODEL_CTECARRAY_H_ */
