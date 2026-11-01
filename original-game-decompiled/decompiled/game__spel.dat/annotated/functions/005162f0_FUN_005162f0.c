
/* ==== FUN_005162f0 @ 005162f0 ==== 
 * signature: undefined4 * __stdcall FUN_005162f0(void)
 * body: 005162f0-005163e4
 */

undefined4 * FUN_005162f0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar2 = *(undefined4 **)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x160) * 4);
  puVar5 = (undefined4 *)(DAT_0074c768 + *(int *)(DAT_0074c770 + 0x160) * 4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = FUN_0051e110(0x58);
  }
  else {
    DAT_0074c78c = DAT_0074c78c + 1;
    *puVar5 = *(undefined4 *)*puVar5;
  }
  puVar5 = puVar2;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (DAT_0074c644 == DAT_0074c618) {
    DAT_0074c61c = puVar2;
  }
  puVar2[0x13] = DAT_0074c644;
  DAT_0074c644 = DAT_0074c644 + 1;
  uVar3 = FUN_005147d0(DAT_0074c03c);
  *puVar2 = 0;
  puVar2[0xf] = uVar3;
  puVar2[1] = 0;
  uVar1 = DAT_0074c494;
  uVar3 = DAT_0074be14;
  if ((DAT_0074be4c == 0) || (DAT_0074be08 == 0)) {
    puVar2[2] = DAT_0074c490;
    puVar2[3] = uVar1;
  }
  else {
    puVar2[2] = DAT_0074be10;
    puVar2[3] = uVar3;
  }
  puVar2[0x14] = puVar2[0x14] | 0x41200;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_newfacet__created_facet_f_d_005ba9e0);
  }
  return puVar2;
}


