
/* ==== FUN_0055bce2 @ 0055bce2 ==== 
 * signature: undefined4 __cdecl FUN_0055bce2(int param_1, uint * param_2)
 * body: 0055bce2-0055bdfc
 */

undefined4 __cdecl FUN_0055bce2(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  uint *puVar3;
  size_t sVar4;
  uint *puVar5;
  int iVar6;
  uint local_a8 [33];
  undefined4 local_24 [2];
  undefined4 local_1c;
  uint local_18;
  ushort local_14 [4];
  undefined4 *local_c;
  undefined4 local_8;
  
  puVar3 = FUN_0055beb6(param_2,local_a8,(undefined4 *)local_14,&local_1c);
  if (puVar3 != (uint *)0x0) {
    sVar4 = _strlen((char *)local_a8);
    puVar3 = _malloc(sVar4 + 1);
    if (puVar3 != (uint *)0x0) {
      puVar1 = (uint *)(&DAT_0074dcdc + param_1 * 4);
      puVar2 = (undefined *)(&DAT_005c8334)[param_1 * 3];
      local_18 = *puVar1;
      local_c = (undefined4 *)(&DAT_0074df90 + param_1 * 6);
      FUN_0055b3c0(local_24,local_c,6);
      local_8 = DAT_0074dcf4;
      puVar5 = FUN_0055ee40(puVar3,local_a8);
      (&DAT_005c8334)[param_1 * 3] = puVar5;
      *puVar1 = (uint)local_14[0];
      FUN_0055b3c0(local_c,(undefined4 *)local_14,6);
      if (param_1 == 2) {
        DAT_0074dcf4 = local_1c;
      }
      if (param_1 == 1) {
        DAT_0074dcf8 = local_1c;
      }
      iVar6 = (**(code **)(&DAT_005c8338 + param_1 * 0xc))();
      if (iVar6 == 0) {
        if (puVar2 != &DAT_005c8220) {
          FUN_00559d4e(puVar2);
        }
        return (&DAT_005c8334)[param_1 * 3];
      }
      (&DAT_005c8334)[param_1 * 3] = puVar2;
      FUN_00559d4e(puVar3);
      *puVar1 = local_18;
      DAT_0074dcf4 = local_8;
    }
  }
  return 0;
}


