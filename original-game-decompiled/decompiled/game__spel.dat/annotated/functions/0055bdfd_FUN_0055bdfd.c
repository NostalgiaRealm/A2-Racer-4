
/* ==== FUN_0055bdfd @ 0055bdfd ==== 
 * signature: uint * __stdcall FUN_0055bdfd(void)
 * body: 0055bdfd-0055beb5
 */

uint * FUN_0055bdfd(void)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  if (DAT_005c8334 == (uint *)0x0) {
    DAT_005c8334 = _malloc(0x351);
  }
  *(undefined1 *)DAT_005c8334 = 0;
  FUN_0055bfce(DAT_005c8334,3);
  ppuVar3 = &PTR_DAT_005c8340;
  do {
    FUN_0055ee50(DAT_005c8334,(uint *)&DAT_00579664);
    ppuVar4 = ppuVar3 + 3;
    iVar2 = _strcmp(*ppuVar3,ppuVar3[3]);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    FUN_0055bfce(DAT_005c8334,3);
    ppuVar3 = ppuVar4;
  } while ((int)ppuVar4 < 0x5c8370);
  if (!bVar1) {
    return DAT_005c8334;
  }
  FUN_00559d4e(DAT_005c8334);
  DAT_005c8334 = (uint *)0x0;
  return (uint *)PTR_DAT_005c834c;
}


