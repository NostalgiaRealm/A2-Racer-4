
/* ==== FUN_00402b20 @ 00402b20 ==== 
 * signature: undefined __stdcall FUN_00402b20(uint param_1)
 * body: 00402b20-00402b78
 */

void FUN_00402b20(uint param_1)

{
  uint uVar1;
  void *pvStack_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_00569510;
  pvStack_10 = ExceptionList;
  uVar1 = param_1 | 0x1f;
  if (0xfffffffd < (param_1 | 0x1f)) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 + 2;
  local_8 = 0;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  ExceptionList = &pvStack_10;
  operator_new(uVar1);
  FUN_00402ba0();
  return;
}


