
/* ==== FUN_00446cf0 @ 00446cf0 ==== 
 * signature: undefined __stdcall FUN_00446cf0(void)
 * body: 00446cf0-00446dc9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446cf0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  _DAT_006fa310 = 0x10646464;
  _DAT_006fa330 = 0x10646464;
  _DAT_006fa350 = 0x10646464;
  _DAT_006fa370 = 0x10646464;
  DAT_006fa2e0 = 0;
  DAT_006fa2e4 = 0;
  _DAT_006fa2e8 = 0;
  DAT_006fa2f0 = 0x80a0a0c8;
  _DAT_006fa2f4 = 0;
  DAT_006fa300 = 0xbfc00000;
  DAT_006fa304 = 0xbfc00000;
  _DAT_006fa308 = 0;
  _DAT_006fa314 = 0;
  _DAT_006fa320 = 0xbfc00000;
  _DAT_006fa324 = 0x3fc00000;
  _DAT_006fa328 = 0;
  _DAT_006fa334 = 0;
  _DAT_006fa340 = 0x3fc00000;
  _DAT_006fa344 = 0x3fc00000;
  _DAT_006fa348 = 0;
  _DAT_006fa354 = 0;
  _DAT_006fa360 = 0x3fc00000;
  _DAT_006fa364 = 0xbfc00000;
  _DAT_006fa368 = 0;
  _DAT_006fa374 = 0;
  puVar2 = &DAT_006fa300;
  puVar3 = &DAT_006fa380;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


