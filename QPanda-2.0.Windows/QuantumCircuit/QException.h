﻿/*
Copyright (c) 2017-2018 Origin Quantum Computing. All Right Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef _QEXCEPTION_H_

#if ! (_QEXCEPTION_VER_ > 20180411)

#define _QEXCEPTION_H_
#define _QEXCEPTION_VER_ 20180411

#include <exception>

using namespace std;

class QException : public exception
{

};
class QubitException : public QException
{

};
class MappingException : public QubitException
{

};
class Not_Implemented_Exception : public QException
{

};
class NoFreeQubitException : public QubitException
{

};
class RepeatFreeException : public QubitException
{

};
class QGateException : public QException
{

};
class NoUnitaryException : public QGateException
{

};
class QProgramException : public QException
{

};
class ErrorNodeTypeException : public QProgramException
{

};

#endif
#endif