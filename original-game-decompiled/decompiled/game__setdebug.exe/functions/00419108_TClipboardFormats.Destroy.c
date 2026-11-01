
/* ==== TClipboardFormats.Destroy @ 00419108 ==== 
 * signature: undefined TClipboardFormats.Destroy(void)
 * body: 00419108-00419130
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TClipboardFormats_Destroy(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403074(param_1,param_2);
  FUN_00402d14((int *)piVar1[1]);
  FUN_00402d14((int *)piVar1[2]);
  if ('\0' < extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


