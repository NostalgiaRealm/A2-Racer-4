
/* ==== FUN_004516a0 @ 004516a0 ==== 
 * signature: undefined __stdcall FUN_004516a0(void)
 * body: 004516a0-004516ca
 */

void FUN_004516a0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (DAT_006fbde2 == '\x01') {
    bVar1 = FUN_004486a0(0xf);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      DAT_006fbde2 = '\0';
      FUN_00448570(0xf,0);
    }
  }
  return;
}


