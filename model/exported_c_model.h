#define N_FEATURES 11
#define N_CLASSES 2

// 标准化参数（mean, scale）
const float scaler_mean[N_FEATURES] = {
    0.013725f, 0.723758f, 1.123934f, -1.120185f, 2.244119f, 0.723896f, 1.513908f, 50.781250f, 119.040459f, 19740.779797f, 21426.887761f
};

const float scaler_scale[N_FEATURES] = {
    0.007366f, 0.359999f, 0.515632f, 0.512965f, 1.027847f, 0.360057f, 0.028295f, 1.000000f, 59.591841f, 15800.700414f, 17087.513971f
};

// 随机森林推理函数（简化版）
int predict(float features[N_FEATURES]) {
    // 特征标准化
    float scaled[N_FEATURES];
    for (int i = 0; i < N_FEATURES; i++) {
        scaled[i] = (features[i] - scaler_mean[i]) / scaler_scale[i];
    }

    // 随机森林投票（共 50 棵树）
    int votes[2] = {0, 0};

    // 决策树 1
    if (scaled[5] <= 0.002257f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 2
    if (scaled[9] <= -0.007931f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 3
    if (scaled[3] <= -0.013703f) {
            votes[1]++;
    } else {
            votes[0]++;
    }

    // 决策树 4
    if (scaled[2] <= 0.040495f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 5
    if (scaled[1] <= -0.000265f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 6
    if (scaled[8] <= 0.000114f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 7
    if (scaled[4] <= -0.002020f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 8
    if (scaled[10] <= -0.006690f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 9
    if (scaled[10] <= -0.005430f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 10
    if (scaled[10] <= -0.007757f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 11
    if (scaled[5] <= 0.004682f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 12
    if (scaled[10] <= -0.007757f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 13
    if (scaled[1] <= 0.002781f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 14
    if (scaled[8] <= 0.001390f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 15
    if (scaled[4] <= 0.012447f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 16
    if (scaled[9] <= -0.010009f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 17
    if (scaled[4] <= -0.006845f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 18
    if (scaled[9] <= -0.010009f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 19
    if (scaled[4] <= -0.002020f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 20
    if (scaled[3] <= -0.028987f) {
            votes[1]++;
    } else {
            votes[0]++;
    }

    // 决策树 21
    if (scaled[2] <= 0.009369f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 22
    if (scaled[5] <= -0.000040f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 23
    if (scaled[1] <= 0.002781f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 24
    if (scaled[10] <= -0.006496f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 25
    if (scaled[1] <= 0.002263f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 26
    if (scaled[2] <= 0.004532f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 27
    if (scaled[3] <= -0.028987f) {
            votes[1]++;
    } else {
            votes[0]++;
    }

    // 决策树 28
    if (scaled[1] <= -0.000290f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 29
    if (scaled[10] <= -0.006496f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 30
    if (scaled[4] <= 0.013998f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 31
    if (scaled[1] <= 0.002781f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 32
    if (scaled[9] <= -0.010009f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 33
    if (scaled[10] <= -0.006690f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 34
    if (scaled[8] <= 0.001390f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 35
    if (scaled[1] <= -0.000265f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 36
    if (scaled[9] <= -0.010836f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 37
    if (scaled[10] <= -0.006690f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 38
    if (scaled[1] <= 0.002105f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 39
    if (scaled[9] <= -0.004425f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 40
    if (scaled[0] <= 0.072357f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 41
    if (scaled[9] <= -0.010836f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 42
    if (scaled[10] <= -0.007757f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 43
    if (scaled[10] <= -0.007908f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 44
    if (scaled[10] <= -0.006690f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 45
    if (scaled[9] <= -0.010009f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 46
    if (scaled[4] <= -0.003572f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 47
    if (scaled[8] <= 0.001390f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 48
    if (scaled[2] <= 0.009369f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 49
    if (scaled[4] <= 0.013998f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 决策树 50
    if (scaled[10] <= -0.006690f) {
            votes[0]++;
    } else {
            votes[1]++;
    }

    // 返回票数最多的类别
    if (votes[1] > votes[0]) return 1;
    else return 0;
}
