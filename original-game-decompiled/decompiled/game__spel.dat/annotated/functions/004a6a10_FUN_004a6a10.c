
/* ==== FUN_004a6a10 @ 004a6a10 ==== 
 * signature: undefined __cdecl FUN_004a6a10(uint param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 004a6a10-004a6adc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004a6a10(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_00715300;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x715b00);
  puVar1 = &DAT_00714e48;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  DAT_007152fc = 0;
  FUN_004a7700(param_1);
  puVar1 = &DAT_007128c8;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x714e48);
  FUN_004c3fa0((byte *)s_Initializing_Physical_World_005af79c);
  DAT_00715b08 = FUN_004a3460();
  DAT_00715b0c = FUN_004a3460();
  FUN_004a3960(&DAT_00715f58,0.015151516);
  FUN_004c3fa0((byte *)s_Done_initializing_Physical_World_005af778);
  FUN_004c3fa0((byte *)s_settings_textures___d___d___d_005af758);
  _DAT_007152a4 = param_4;
  _DAT_007152a0 = param_3;
  _DAT_0071529c = param_2;
  _DAT_007152a8 = param_5;
  DAT_00715b14 = 1;
  return;
}


