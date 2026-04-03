#pragma once

// interface, C++에는 없음
// abstract class, pure virtual function
class IRenderableComponent
{
public:
	virtual void Render() = 0;

};

