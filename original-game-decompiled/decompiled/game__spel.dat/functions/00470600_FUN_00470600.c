
/* ==== FUN_00470600 @ 00470600 ==== 
 * signature: undefined __fastcall FUN_00470600(undefined4 * param_1)
 * body: 00470600-004706ce
 */

void __fastcall FUN_00470600(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056b161;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005769e8;
  local_4 = 1;
  FUN_00473160((int)(param_1 + 0xc));
  iVar2 = param_1[6];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  piVar3 = (int *)param_1[3];
  local_4 = 0xffffffff;
  piVar5 = (int *)*piVar3;
  while (piVar5 != piVar3) {
    piVar4 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_00471e60(piVar5 + 2,0);
    FUN_0054b339(piVar5);
    param_1[4] = param_1[4] + -1;
    piVar5 = piVar4;
  }
  FUN_0054b339((LPVOID)param_1[3]);
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}


