#pragma once
#include "Artwork.h"
class Series :
    public Artwork
{
public:
	int getEpisodeNumber();
	void setEpisodeNumber(int episodeNumber);
	int getSeasonNumber();
	void setSeasonNumber(int seasonNumber);
private:
	int episodeNumber_;
	int seasonNumber_;
};

