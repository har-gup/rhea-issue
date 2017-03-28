// RheaIssue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "simplex_solver.hpp"
#include <algorithm>
using namespace std;

void testRhea() {
    rhea::simplex_solver solver;
    rhea::variable v10060755000599088100;
    auto c15992736607027626807 = rhea::constraint((v10060755000599088100 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c15992736607027626807);
    rhea::variable v17556029263233740676;
    auto c3038756308640872991 = rhea::constraint((v17556029263233740676 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c3038756308640872991);
    rhea::variable v3646971162660427849;

    solver.add_edit_var(v3646971162660427849, rhea::strength::strong(1500));
    /* edit
    auto c1485195679571662646 = rhea::constraint((v3646971162660427849 * 1) + 0 == 0, rhea::strength::strong(1500));
    solver.add_constraint(c1485195679571662646);
    */

    rhea::variable v3976711321483779551;

    solver.add_edit_var(v3976711321483779551, rhea::strength::strong(1500));
    /* edit
    auto c13626442265339960781 = rhea::constraint((v3976711321483779551 * 1) + 0 == 0, rhea::strength::strong(1500));
    solver.add_constraint(c13626442265339960781);
    */

    rhea::variable v17202456504641455483;
    auto c12663966123709174112 = rhea::constraint((v17202456504641455483 * 1) + 0 == 0, rhea::strength::required());
    solver.add_constraint(c12663966123709174112);
    rhea::variable v16316767511287597425;
    auto c6919948472668188339 = rhea::constraint((v16316767511287597425 * 1) + 0 == 0, rhea::strength::required());
    solver.add_constraint(c6919948472668188339);
    auto c16027935648564639925 = rhea::constraint((v10060755000599088100 * 1) + (v3646971162660427849 * -1) + 0 == 0, rhea::strength::strong(1500));
    solver.add_constraint(c16027935648564639925);
    auto c9959746750102196922 = rhea::constraint((v17556029263233740676 * 1) + (v3976711321483779551 * -1) + 0 == 0, rhea::strength::strong(1500));
    solver.add_constraint(c9959746750102196922);
    rhea::variable v1698150918654368180;
    auto c6890731508873819664 = rhea::constraint((v1698150918654368180 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c6890731508873819664);
    rhea::variable v14208021488064112993;
    auto c11002453429427187926 = rhea::constraint((v14208021488064112993 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c11002453429427187926);
    rhea::variable v15649174078333119353;
    auto c5473744556386255001 = rhea::constraint((v15649174078333119353 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c5473744556386255001);
    rhea::variable v3759830620827437687;
    auto c2618583215217863822 = rhea::constraint((v3759830620827437687 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c2618583215217863822);
    rhea::variable v1491431732511894915;
    auto c13850162314763359189 = rhea::constraint((v1491431732511894915 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c13850162314763359189);
    rhea::variable v3008788452418639179;
    auto c9097576866200439200 = rhea::constraint((v3008788452418639179 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c9097576866200439200);
    rhea::variable v18177499859934470130;
    auto c16733268810725062734 = rhea::constraint((v18177499859934470130 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c16733268810725062734);
    rhea::variable v14685949610930046816;
    auto c2118298663610632543 = rhea::constraint((v14685949610930046816 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c2118298663610632543);
    rhea::variable v5230598367065624128;
    auto c10253781171136542923 = rhea::constraint((v5230598367065624128 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c10253781171136542923);
    rhea::variable v2788286632605055870;
    auto c16819249608726125137 = rhea::constraint((v2788286632605055870 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c16819249608726125137);
    rhea::variable v11835509202792897400;
    auto c11832853682840558936 = rhea::constraint((v11835509202792897400 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c11832853682840558936);
    rhea::variable v7814802092223491032;
    auto c1939507752610086755 = rhea::constraint((v7814802092223491032 * 1) + 0 >= 0, rhea::strength::required());
    solver.add_constraint(c1939507752610086755);
    auto c3064671692465550495 = rhea::constraint((v14208021488064112993 * 1) + -200 == 0, rhea::strength::strong(3000));
    solver.add_constraint(c3064671692465550495);
    rhea::variable v7012692327653694487;
    rhea::variable v12801198018109057233;
    auto c6577392360734000701 = rhea::constraint((v3759830620827437687 * 1) + (v7012692327653694487 * 1) + (v12801198018109057233 * -1) + 0 == 0, rhea::strength::strong(4500));
    solver.add_constraint(c6577392360734000701);
    rhea::variable v33263119912496502;
    auto c13209358202546969250 = rhea::constraint((v33263119912496502 * 1) + (v7012692327653694487 * -1) + 0 == 0, rhea::strength::strong(4500));
    solver.add_constraint(c13209358202546969250);
    rhea::variable v17866148492301523794;
    auto c6904336848911516117 = rhea::constraint((v2788286632605055870 * -1) + (v33263119912496502 * 1) + (v14208021488064112993 * 1) + (v17866148492301523794 * -1) + 0 == 0, rhea::strength::strong(4500));
    solver.add_constraint(c6904336848911516117);
    rhea::variable v8859332122183433131;
    auto c15597478948639626824 = rhea::constraint((v12801198018109057233 * 1) + (v8859332122183433131 * -1) + (v3008788452418639179 * 1) + 0 == 0, rhea::strength::strong(4500));
    solver.add_constraint(c15597478948639626824);
    auto c40641786037180249 = rhea::constraint((v3008788452418639179 * 1) + (v7814802092223491032 * -2) + 0 == 0, rhea::strength::strong(4500));
    solver.add_constraint(c40641786037180249);
    auto c17232126548262192354 = rhea::constraint((v7814802092223491032 * -1) + (v14685949610930046816 * 1) + 0 == 0, rhea::strength::strong(4500));
    solver.add_constraint(c17232126548262192354);
    auto c18225203118433006874 = rhea::constraint((v8859332122183433131 * 1) + (v14685949610930046816 * 1) + (v17866148492301523794 * -1) + 0 == 0, rhea::strength::strong(4500));
    solver.add_constraint(c18225203118433006874);
    auto c16952146431243166917 = rhea::constraint((v2788286632605055870 * 1) + (v7814802092223491032 * -2) + 0 == 0, rhea::strength::strong(4500));
    solver.add_constraint(c16952146431243166917);
    solver.remove_constraint(c40641786037180249);
}

int main() {
    testRhea();
    return 0;
}
