
/* ==== FUN_004a3800 @ 004a3800 ==== 
 * signature: undefined __fastcall FUN_004a3800(undefined4 * param_1)
 * body: 004a3800-004a395c
 */

void __fastcall FUN_004a3800(undefined4 *param_1)

{
  char cVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *this;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056efaa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00577268;
  pvVar2 = (LPVOID)param_1[0x1c];
  local_4 = 4;
  param_1[0x1b] = &PTR_FUN_0057727c;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_0042f530();
    FUN_0054b339(*(LPVOID *)((int)pvVar2 + 4));
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    FUN_0054b339(pvVar2);
  }
  param_1[0x1c] = 0;
  pvVar2 = (LPVOID)param_1[0x1a];
  local_4._0_1_ = 3;
  param_1[0x19] = &PTR_FUN_0057728c;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_004da4d0((int)pvVar2);
    FUN_0054b339(pvVar2);
  }
  param_1[0x1a] = 0;
  local_4._0_1_ = 2;
  param_1[0x14] = &PTR_FUN_005772d8;
  FUN_004028f0(param_1 + 0x15,'\x01');
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0xf] = &PTR_FUN_005772d8;
  FUN_004028f0(param_1 + 0x10,'\x01');
  param_1[10] = &PTR_FUN_005772d8;
  iVar3 = param_1[0xc];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  this = param_1 + 6;
  local_4 = 6;
  iVar3 = (**(code **)*this)();
  if (0 < iVar3) {
    do {
      FUN_004a54c0(this,0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[8] = &PTR_FUN_005772c8;
  if ((void *)param_1[9] != (void *)0x0) {
    FUN_004ed120((void *)param_1[9],1);
  }
  param_1[9] = 0;
  local_4 = 0xffffffff;
  *this = &PTR_FUN_005772a8;
  if ((void *)param_1[7] != (void *)0x0) {
    FUN_004ed120((void *)param_1[7],1);
  }
  param_1[7] = 0;
  ExceptionList = pvStack_c;
  return;
}


