
/* ==== FUN_005163f0 @ 005163f0 ==== 
 * signature: undefined4 * __stdcall FUN_005163f0(void)
 * body: 005163f0-005164ba
 */

undefined4 * FUN_005163f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x40) * 4);
  puVar1 = (undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x40) * 4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = FUN_0051e110(0x10);
  }
  else {
    DAT_0074c78c = DAT_0074c78c + 1;
    *puVar1 = *(undefined4 *)*puVar1;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  DAT_0074cd68 = DAT_0074cd68 + 1;
  if (DAT_0074c648 == 0xffffff) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__more_than__d_ridg_005baa20);
  }
  puVar2[3] = (puVar2[3] ^ DAT_0074c648) & 0xffffff ^ puVar2[3];
  DAT_0074c648 = DAT_0074c648 + 1;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_newridge__created_ridge_r_d_005baa00);
  }
  return puVar2;
}


