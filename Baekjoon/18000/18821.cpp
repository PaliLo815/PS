#include <bits/stdc++.h>
using namespace std;

const int arr[] = { 906150257,906150294,906150295,906150308,906150311,906150314,906150315,906151516,906151517,906151576,906154583,906154586,906154605,906154606,906154609,906154758,906154763,906154764,906154769,906154770,906154789,906154790,906154791,906154792,906154793,906154794,906154825,906154826,906154829,906154830,906154837,906154838,906154857,906154858,906154865,906154882,906154885,906154886,906154887,906154888,906154889,906154890,906154891,906154892,906154893,906154894,906154895,906154908,906154909,906154912,906154915,906154928,906154947,906154950,906180359,906180362,906180363,906180364,906180365,906180366,906180367,906180370,906180371,906180374,906180375,906180376,906180391,906180518,906180519,906180520,906180525,906180534,906180537,906180554,906180555,906192698,906192847,906192866,906192867,906192904,906192905,906192906,906192907,906192966,906192971,906192972,906192979,906192984,906192985,906193228,906193229,906193234,906193245,906193246,906193247,906193248,906193303,906193304,906193419,906193420,906193465,906193466,906193475,906193476,906193477,906193478,906194931,906194932,906194933,906194946,906194949,906194950,906194951,906194968,906194979,906194980,906195099,906195100,906195109,906195150,906195151,906195152,906195297,906195298,906195299,906195986,906195989,906195990,906196009,906196010,906196011,906196014,906196015,906196016,906196045,906196052,906196053,906196056,906196057,906196072,906196077,906196080,906196081,906196082,906196083,906196092,906196099,906208712,906208713,906208714,906208731,906208732,906209041,906209064,906209067,906209068,906209069,906209070,906209071,906209224,906209227,906209228,906209233,906209236,906209237,906209238,906209241,906209242,906209243,906209272,906209283,906209284,906209285,906477702,906477735,906477812,906477867,906477868,906477869,906477870,906477871,906477900,906477901,906477902,906477903,906477906,906477929,906477932,906477933,906477934,906477935,906477936,906477937,906486640,906486805,906486806,906486807,906486808,906486817,906486818,906486819,906486820,906486821,906486832,906486843,906486854,906486855,906486856,906486909,906486914,906486917,906486974,906486975,906487002,906487005,906487064,906487065,906487066,906487069,906487070,906487071,906487072,906487073,906487078,906487085,906487086,906487087,906487102,906487185,906487186,906487187,906487190,906487191,906487192,906487193,906487194,906487195,906487204,906487205,906487206,906487259,906487260,906487261,906487262,906487263,906487264,906487271,906487288,906487933,906487934,906487937,906487938,906487949,906487974,906487975,906487994,906487995,906488002,906488003,906488004,906488007,906488008,906488009,906488010,906488023,906488026,906488027,906488066,906488067,906488068,906488077,906488080 };
const char ans[2] = { 'E','O' };

int main() {
    cin.tie(0), cout.tie(0);
    ios::sync_with_stdio(0);

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        if (N < 906150257)
            cout << ans[N != 1];
        else {
            auto it = lower_bound(arr, arr + 272, N) - arr;
            if (arr[it] != N) --it;
            cout << ans[it & 1];
        }
        cout << '\n';
    }
    return 0;
}