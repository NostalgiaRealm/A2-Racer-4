
/* ==== FUN_005243b0 @ 005243b0 ==== 
 * signature: undefined __stdcall FUN_005243b0(void)
 * body: 005243b0-005244b6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005243b0(void)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  
  DAT_0074d508 = 0;
  FUN_00521db0();
  FUN_005220c0();
  FUN_00522520();
  FUN_00522a90();
  FUN_00522d70();
  FUN_00523030();
  FUN_005234c0();
  FUN_00523830();
  FUN_00523c70();
  if (0xcc < DAT_0074d508) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_error__qh_initstatistics___005c0490);
    FUN_00559c79(1);
  }
  _DAT_0074d4c8 = 0;
  _DAT_0074d4d0 = 0;
  _DAT_0074d4e0 = 0x7fffffff;
  _DAT_0074d4d8 = 0x80000000;
  _DAT_0074d4f0 = 0;
  _DAT_0074d4f4 = 0;
  _DAT_0074d500 = 0xffffffff;
  _DAT_0074d504 = 0x7fefffff;
  _DAT_0074d4f8 = 0xffffffff;
  _DAT_0074d4fc = 0xffefffff;
  iVar3 = 0;
  puVar2 = &DAT_0074c7d0;
  do {
    bVar1 = (&DAT_0074d338)[iVar3];
    if ((char)bVar1 < '\x06') {
      if (bVar1 != 0) {
        *(undefined4 *)puVar2 = *(undefined4 *)(&DAT_0074d4c0 + (uint)bVar1 * 8);
      }
    }
    else {
      *puVar2 = *(undefined8 *)(&DAT_0074d4c0 + (uint)bVar1 * 8);
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x74cde0);
  return;
}


