#ifndef PART_OF_SPEECH_DATA_H
#define PART_OF_SPEECH_DATA_H

#include "nlohmann/json.hpp"

using json = nlohmann::json;

int USER_DICT_MIN_PRIORITY = 0;
int USER_DICT_MAX_PRIORITY = 10;

json part_of_speech_data = {
    {
        "PROPER_NOUN", {
            { "part_of_speech", "名詞" }, 
            { "part_of_speech_detail_1", "固有名詞" },
            { "part_of_speech_detail_2", "一般" },
            { "part_of_speech_detail_3", "*" },
            { "context_id", 1348 },
            { "cost_candidates", {
                -988,
                3488,
                4768,
                6048,
                7328,
                8609,
                8734,
                8859,
                8984,
                9110,
                14176,
            } },
            { "accent_associative_rules", {
                "*",
                "C1",
                "C2",
                "C3",
                "C4",
                "C5",
            } }
        }
    },
    {
        "COMMON_NOUN", {
            { "part_of_speech", "名詞" }, 
            { "part_of_speech_detail_1", "一般" },
            { "part_of_speech_detail_2", "*" },
            { "part_of_speech_detail_3", "*" },
            { "context_id", 1345 },
            { "cost_candidates", {
                -4445,
                49,
                1473,
                2897,
                4321,
                5746,
                6554,
                7362,
                8170,
                8979,
                15001,
            } },
            { "accent_associative_rules", {
                "*",
                "C1",
                "C2",
                "C3",
                "C4",
                "C5",
            } }
        }
    },
    {
        "VERB", {
            { "part_of_speech", "動詞" }, 
            { "part_of_speech_detail_1", "自立" },
            { "part_of_speech_detail_2", "*" },
            { "part_of_speech_detail_3", "*" },
            { "context_id", 642 },
            { "cost_candidates", {
                3100,
                6160,
                6360,
                6561,
                6761,
                6962,
                7414,
                7866,
                8318,
                8771,
                13433,
            } },
            { "accent_associative_rules", {
                "*",
            } }
        }
    },
    {
        "ADJECTIVE", {
            { "part_of_speech", "形容詞" }, 
            { "part_of_speech_detail_1", "自立" },
            { "part_of_speech_detail_2", "*" },
            { "part_of_speech_detail_3", "*" },
            { "context_id", 20 },
            { "cost_candidates", {
                1527,
                3266,
                3561,
                3857,
                4153,
                4449,
                5149,
                5849,
                6549,
                7250,
                10001,
            } },
            { "accent_associative_rules", {
                "*",
            } }
        }
    },
    {
        "SUFFIX", {
            { "part_of_speech", "名詞" }, 
            { "part_of_speech_detail_1", "接尾" },
            { "part_of_speech_detail_2", "一般" },
            { "part_of_speech_detail_3", "*" },
            { "context_id", 1358 },
            { "cost_candidates", {
                4399,
                5373,
                6041,
                6710,
                7378,
                8047,
                9440,
                10834,
                12228,
                13622,
                15847,
            } },
            { "accent_associative_rules", {
                "*",
                "C1",
                "C2",
                "C3",
                "C4",
                "C5",
            } }
        }
    }
};

#endif // PART_OF_SPEECH_DATA_H
