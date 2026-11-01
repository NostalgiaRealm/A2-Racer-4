
/* ==== thunk_FUN_004f26d0 @ 0050dc10 ==== 
 * signature: undefined __fastcall thunk_FUN_004f26d0(undefined4 * param_1)
 * body: 0050dc10-0050dc14
 * thunk to: FUN_004f26d0
 */

void __fastcall thunk_FUN_004f26d0(undefined4 *param_1)

{
  int *piVar1;
  void *this;
  void *pvStack_14;
  undefined4 *puStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  pcStack_8 = FUN_00572e50;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005782d0;
  piVar1 = (int *)param_1[7];
  uStack_4 = 0;
  if (piVar1 != (int *)0x0) {
    FUN_00500bd0(piVar1);
    FUN_0054b339(piVar1);
  }
  param_1[7] = 0;
  FUN_0053cd20((int)(param_1 + 0x12));
  FUN_004f2980(param_1);
  pvStack_14 = (void *)param_1[6];
  puStack_10 = param_1;
  FUN_004f8570(pvStack_14,&pvStack_14);
  if ((param_1[0x20] & 0x2000) != 0) {
    FUN_004f6340(*(void **)(param_1[6] + 0xc),param_1);
  }
  if ((param_1[0x20] & 0x1000) != 0) {
    pvStack_14 = (void *)param_1[6];
    puStack_10 = param_1;
    FUN_004f61c0(*(void **)((int)pvStack_14 + 0xc),(int)&pvStack_14);
  }
  FUN_004f68b0(*(void **)(*(int *)(param_1[0x29] + 0xc) + 0xc),(int)param_1);
  if (param_1[0x10] != 0) {
    FUN_004fe450((int)param_1);
  }
  FUN_004f45e0((void *)param_1[0x29],(int)param_1);
  if ((void *)param_1[0x2b] != (void *)param_1[0x29]) {
    FUN_004f45e0((void *)param_1[0x2b],(int)param_1);
  }
  this = (void *)param_1[0x2a];
  if ((this != (void *)param_1[0x2b]) && (this != (void *)param_1[0x29])) {
    FUN_004f45e0(this,(int)param_1);
  }
  FUN_0054b339((LPVOID)param_1[0xb]);
  param_1[0xb] = 0;
  uStack_4 = 1;
  FUN_0053cce0((int)(param_1 + 0x12));
  uStack_4 = 0xffffffff;
  FUN_004f2a70(param_1);
  ExceptionList = pvStack_c;
  return;
}


