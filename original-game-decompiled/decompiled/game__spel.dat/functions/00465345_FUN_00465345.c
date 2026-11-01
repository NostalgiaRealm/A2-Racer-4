
/* ==== FUN_00465345 @ 00465345 ==== 
 * signature: undefined4 __stdcall FUN_00465345(void)
 * body: 00465345-00465392
 */

undefined4 FUN_00465345(void)

{
  int *piVar1;
  int unaff_EBX;
  int unaff_ESI;
  
  piVar1 = (int *)(unaff_EBX + -0x3f7bf73c);
  *piVar1 = *piVar1 + 1;
  if (*piVar1 != 0) {
    *(code **)(unaff_ESI * 0xf0 + 0x6c + DAT_00715e50) = FUN_00407300;
    *(undefined4 *)(unaff_ESI * 0xf0 + 0x5c + DAT_00715e50) = 1;
    FUN_00426fc0(&DAT_005d3460,unaff_ESI,'\x01');
    FUN_00423990(unaff_ESI,1);
  }
  return 1;
}


