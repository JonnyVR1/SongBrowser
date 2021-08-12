#pragma once

#include <string_view>
#include "songdatacore/shared/bindings.hpp"

// this is just a wrapper around the bindings for songdatacore cause this looks a bit better :) 
namespace SongDataCoreUtils
{
    using BeatStarSong = song_data_core::BeatStarSong;
    using BeatStarSongDifficultyStats = song_data_core::BeatStarSongDifficultyStats;

    void Init();
    bool get_loaded();
    const BeatStarSong* GetSong(const std::string_view& hash); 
    const BeatStarSongDifficultyStats* GetDiff(const BeatStarSong* song, int diff);
}