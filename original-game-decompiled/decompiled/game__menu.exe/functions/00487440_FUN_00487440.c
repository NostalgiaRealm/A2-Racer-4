
/* ==== FUN_00487440 @ 00487440 ==== 
 * signature: undefined FUN_00487440(void)
 * body: 00487440-00487475
 */

int FUN_00487440(short param_1,short param_2,char param_3)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  psVar1 = (short *)&DAT_004ab4d8;
  while (((param_1 != *psVar1 || (param_2 != psVar1[1])) || (param_3 != (char)psVar1[2]))) {
    iVar2 = iVar2 + 1;
    psVar1 = psVar1 + 3;
    if (iVar2 == 10) {
      return -1;
    }
  }
  return iVar2;
}


