
/* ==== FUN_00446fb0 @ 00446fb0 ==== 
 * signature: undefined __stdcall FUN_00446fb0(void)
 * body: 00446fb0-00446fd7
 */

void FUN_00446fb0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_004463c0(iVar2);
    iVar2 = iVar2 + 1;
    *(undefined4 *)(&DAT_006f51b8 + iVar1 * 300) = 0;
  } while (iVar2 < 0x46);
  return;
}


