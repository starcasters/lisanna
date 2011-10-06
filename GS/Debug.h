/*
    This file is part of Lisana.

    Lisana is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Lisana is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Lisana.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef Debug__h__
#define Debug__h__

// Monster
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class Monster : public D3Struct {
	public:
	void* New();

	Monster();
	~Monster();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern Monster aMonster;


// Monster
//
// { unknow_field_0 }
// { unknow_field_1 }
// { unknow_field_2 }
// { unknow_field_3 }
// { unknow_field_4 }


class Monster : public D3Struct {
	public:
	void* New();

	Monster();
	~Monster();
	const char* Name();
	
	void* unknow_field_0(void *Data);
	void* unknow_field_1(void *Data);
	void* unknow_field_2(void *Data);
	void* unknow_field_3(void *Data);
	int* unknow_field_4(void *Data);
};

extern Monster aMonster;

#endif
