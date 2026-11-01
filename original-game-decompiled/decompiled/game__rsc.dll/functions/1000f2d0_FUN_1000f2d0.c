
/* ==== FUN_1000f2d0 @ 1000f2d0 ==== 
 * signature: uint * __stdcall FUN_1000f2d0(void)
 * body: 1000f2d0-1000f3cf
 */

uint * FUN_1000f2d0(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int local_8;
  
  bVar1 = true;
  if (DAT_100304ec == (uint *)0x0) {
    DAT_100304ec = (uint *)FUN_10003710((void *)0x351,2,0x1002d060,0x167);
  }
  *(undefined1 *)DAT_100304ec = 0;
  for (local_8 = 1; __strcats(DAT_100304ec,3), local_8 < 5; local_8 = local_8 + 1) {
    FUN_10001ed0(DAT_100304ec,(uint *)&DAT_1002d058);
    iVar2 = _strcmp((char *)(&DAT_100304ec)[local_8 * 3],(char *)(&DAT_100304ec)[(local_8 + 1) * 3])
    ;
    if (iVar2 != 0) {
      bVar1 = false;
    }
  }
  puVar3 = DAT_100304ec;
  if (bVar1) {
    FUN_100041a0(DAT_100304ec,2);
    DAT_100304ec = (uint *)0x0;
    puVar3 = (uint *)PTR_DAT_10030504;
  }
  return puVar3;
}


