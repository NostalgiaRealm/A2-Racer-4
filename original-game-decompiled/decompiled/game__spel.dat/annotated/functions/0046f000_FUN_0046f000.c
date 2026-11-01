
/* ==== FUN_0046f000 @ 0046f000 ==== 
 * signature: undefined __stdcall FUN_0046f000(void)
 * body: 0046f000-0046f026
 */

void FUN_0046f000(void)

{
  LPVOID pvVar1;
  
  pvVar1 = DAT_00712648;
  if (DAT_00712648 != (LPVOID)0x0) {
    FUN_00470460((int)DAT_00712648);
    FUN_0054b339(pvVar1);
    DAT_00712648 = (LPVOID)0x0;
  }
  return;
}


