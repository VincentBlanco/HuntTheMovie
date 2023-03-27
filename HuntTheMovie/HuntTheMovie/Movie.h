#pragma once
#include "Artwork.h"
class Movie :
    public Artwork
{
public:
	int getMinutesDuration();
	void setMinutesDuration(int minutesDuration);
private:
	int minutesDuration_;
};

