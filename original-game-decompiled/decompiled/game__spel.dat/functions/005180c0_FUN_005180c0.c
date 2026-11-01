
/* ==== FUN_005180c0 @ 005180c0 ==== 
 * signature: undefined __cdecl FUN_005180c0(int * param_1)
 * body: 005180c0-00518234
 */

void __cdecl FUN_005180c0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint unaff_EDI;
  uint uVar7;
  uint local_c;
  int *local_8;
  int local_4;
  
  iVar3 = DAT_0074c03c + 1;
  local_c = 1;
  local_4 = FUN_00514b50(iVar3);
  DAT_0074c600 = FUN_005162f0();
  uVar7 = 0;
  DAT_0074c638 = 0;
  DAT_0074c634 = 0;
  DAT_0074c604 = DAT_0074c600;
  DAT_0074c60c = DAT_0074c600;
  DAT_0074c628 = FUN_00519e50(0,iVar3,unaff_EDI);
  puVar2 = DAT_0074c60c;
  puVar4 = DAT_0074c60c;
  DAT_0074c62c = DAT_0074c628;
  DAT_0074c630 = DAT_0074c628;
  if (param_1 != (int *)0x0) {
    piVar6 = (int *)param_1[1];
    iVar3 = FUN_00514af0(param_1);
    piVar1 = param_1;
    puVar2 = DAT_0074c60c;
    puVar4 = DAT_0074c60c;
    if (0 < iVar3) {
      do {
        local_8 = piVar1 + 1;
        puVar4 = FUN_005162f0();
        uVar5 = FUN_00514880(param_1,iVar3,uVar7,0);
        puVar4[0xd] = uVar5;
        puVar4[0x14] = local_c << 0xb | puVar4[0x14] & 0xfffff7ff;
        FUN_00514e50((int)puVar4);
        puVar4[0x14] = puVar4[0x14] | 0x200;
        FUN_00514ed0(piVar6);
        FUN_00514020(&local_4,(int)puVar4);
        local_c = local_c ^ 1;
        piVar6 = (int *)piVar1[2];
        uVar7 = uVar7 + 1;
        piVar1 = local_8;
        puVar2 = DAT_0074c60c;
        puVar4 = DAT_0074c60c;
      } while ((int)uVar7 < iVar3);
    }
  }
  do {
    DAT_0074c60c = puVar4;
    if ((puVar2 == (undefined4 *)0x0) || (puVar2[0xc] == 0)) {
      FUN_00514ba0(&local_4);
      if (0 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_createsimplex__created_simple_005bbae4);
      }
      return;
    }
    if (puVar4 != (undefined4 *)0x0) {
      iVar3 = 4;
      do {
        if (puVar4[0xc] == 0) break;
        if (puVar4 != puVar2) {
          iVar3 = iVar3 + 4;
          *(undefined4 **)(puVar2[0xf] + -4 + iVar3) = puVar4;
        }
        puVar4 = (undefined4 *)puVar4[0xc];
      } while (puVar4 != (undefined4 *)0x0);
    }
    FUN_00514d30((int *)puVar2[0xf],DAT_0074c03c);
    puVar2 = (undefined4 *)puVar2[0xc];
    puVar4 = DAT_0074c60c;
  } while( true );
}


