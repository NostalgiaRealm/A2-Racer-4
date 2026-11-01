
/* ==== FUN_0049d9d0 @ 0049d9d0 ==== 
 * signature: undefined1 * __stdcall FUN_0049d9d0(undefined1 * param_1, int param_2, int * param_3, int * param_4, int param_5, int param_6)
 * body: 0049d9d0-0049db90
 */

undefined1 *
FUN_0049d9d0(undefined1 *param_1,int param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056eaa0;
  local_c = ExceptionList;
  local_20 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c[0] = (undefined1)param_2;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,'\0');
  uVar9 = 0;
  local_4 = 0;
  iVar7 = 0;
  piVar8 = param_3;
  iVar10 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      iVar7 = local_2c;
      iVar10 = local_20;
      if (param_6 <= local_2c) break;
      iVar7 = *(int *)(param_2 + 4);
      pcVar6 = "";
      if (iVar7 != 0) {
        pcVar6 = (char *)(iVar7 + uVar9);
      }
      if (*pcVar6 == '#') {
        local_20 = local_20 + 1;
        local_2c = local_2c + 1;
        *piVar8 = (uVar9 - local_20) + 1;
        piVar8 = piVar8 + 1;
        local_28 = uVar9;
      }
      else {
        if (iVar7 == 0) {
          pcVar6 = "";
        }
        else {
          pcVar6 = (char *)(iVar7 + uVar9);
        }
        if (*pcVar6 == ' ') {
          local_24 = uVar9;
        }
        if (param_5 <= (int)(uVar9 - local_28)) {
          local_28 = local_24;
          local_2c = local_2c + 1;
          *piVar8 = (local_24 - local_20) + 1;
          piVar8 = piVar8 + 1;
          local_24 = uVar9;
        }
        if (*(int *)(param_2 + 4) == 0) {
          puVar4 = &DAT_0057629c;
        }
        else {
          puVar4 = (undefined1 *)(*(int *)(param_2 + 4) + uVar9);
        }
        uVar2 = *puVar4;
        if (-local_14 - 1 < 2) {
          FUN_0054b1b4();
        }
        uVar1 = local_14 + 1;
        uVar5 = FUN_00402a00(local_1c,uVar1,'\0');
        if ((char)uVar5 != '\0') {
          *(undefined1 *)(local_14 + local_18) = uVar2;
          *(undefined1 *)(local_18 + uVar1) = 0;
          local_14 = uVar1;
        }
      }
      uVar9 = uVar9 + 1;
      iVar7 = local_2c;
      iVar10 = local_20;
    } while (uVar9 < *(uint *)(param_2 + 8));
  }
  param_3[iVar7] = uVar9 - iVar10;
  *param_4 = iVar7;
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(param_1,local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar3 = *(char *)(local_18 + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_0054b339((LPVOID)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar3 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}


