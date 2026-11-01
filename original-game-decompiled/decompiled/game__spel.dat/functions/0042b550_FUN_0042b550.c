
/* ==== FUN_0042b550 @ 0042b550 ==== 
 * signature: undefined __stdcall FUN_0042b550(int param_1, undefined4 param_2, char * param_3, undefined4 param_4, undefined4 param_5, undefined * param_6)
 * body: 0042b550-0042b71f
 */

void FUN_0042b550(int param_1,undefined4 param_2,char *param_3,undefined4 param_4,undefined4 param_5
                 ,undefined *param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  CHAR local_154 [8];
  char local_14c [64];
  byte local_10c [256];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056a277;
  local_c = ExceptionList;
  iVar7 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Car_Configurations_005970f0);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  iVar2 = FUN_004c3cd0(PTR_s_Connected_Object_Assignments_00596a0c,PTR_s_Count_00596a10);
  if (iVar2 == 0) {
    if (param_3 == (char *)0x0) {
      ExceptionList = local_c;
      return;
    }
    cVar1 = param_3[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      param_3[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
  }
  else {
    FUN_005587a3(local_154,&DAT_00597104);
    FUN_004c3d10(PTR_s_Connected_Object_Assignments_00596a0c,local_154,(LPSTR)local_10c,0x3f);
    iVar4 = FUN_004c3d60(local_10c,(uint *)0x0);
    while( true ) {
      FUN_004c3f10(0,local_14c,0x3f);
      pcVar3 = "";
      if (param_3 != (char *)0x0) {
        pcVar3 = param_3;
      }
      iVar5 = __strcmpi(pcVar3,local_14c);
      if ((iVar5 == 0) || (iVar2 <= iVar7)) break;
      iVar7 = iVar7 + 1;
      FUN_005587a3(local_154,&DAT_00597108);
      FUN_004c3d10(PTR_s_Connected_Object_Assignments_00596a0c,local_154,(LPSTR)local_10c,0x3f);
      iVar4 = FUN_004c3d60(local_10c,(uint *)0x0);
    }
    if (iVar7 == iVar2) {
      if (param_3 == (char *)0x0) {
        ExceptionList = local_c;
        return;
      }
      cVar1 = param_3[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        param_3[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
    }
    else {
      iVar2 = 0;
      if (0 < iVar4 + -1) {
        do {
          iVar2 = iVar2 + 1;
          puVar6 = (undefined4 *)FUN_004c3ec0(iVar2);
          FUN_0042b410(param_1,puVar6,param_6);
        } while (iVar2 < iVar4 + -1);
      }
      if (param_3 == (char *)0x0) {
        ExceptionList = local_c;
        return;
      }
      cVar1 = param_3[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        param_3[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
    }
  }
  FUN_0054b339(param_3 + -1);
  ExceptionList = local_c;
  return;
}


