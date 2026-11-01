
/* ==== FUN_00496010 @ 00496010 ==== 
 * signature: undefined __fastcall FUN_00496010(void * param_1)
 * body: 00496010-004960b0
 */

void __fastcall FUN_00496010(void *param_1)

{
  uint uVar1;
  float10 fVar2;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (0.03 <= *(float *)((int)param_1 + 0x58)) {
    FUN_004962e0(param_1,0);
    uVar1 = FUN_00558625();
    local_c = (float)((int)uVar1 % 0x30 + -0x18) * 0.0015625 + *(float *)((int)param_1 + 0x4c);
    uVar1 = FUN_00558625();
    uVar1 = uVar1 & 0x8000000f;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
    }
    local_4 = *(undefined4 *)((int)param_1 + 0x54);
    local_8 = (float)(int)(uVar1 - 8) * 0.0020833334 + *(float *)((int)param_1 + 0x50);
    FUN_0047bc50(*(void **)((int)param_1 + 0x24),&local_c);
    *(undefined4 *)((int)param_1 + 0x58) = 0;
  }
  fVar2 = FUN_004a6800(0x7128b0);
  *(float *)((int)param_1 + 0x58) = (float)(fVar2 + (float10)*(float *)((int)param_1 + 0x58));
  return;
}


