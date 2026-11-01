
/* ==== TObject.Dispatch @ 004031d4 ==== 
 * signature: undefined TObject.Dispatch(void)
 * body: 004031d4-004031f9
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TObject_Dispatch(int *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 unaff_EBX;
  bool bVar2;
  
  uVar1 = *param_2;
  if ((uVar1 != 0) && (bVar2 = uVar1 == 0xc000, uVar1 < 0xc000)) {
    FUN_00403148(*param_1);
    if (!bVar2) {
                    /* WARNING: Could not recover jumptable at 0x004031f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)CONCAT22((short)((uint)unaff_EBX >> 0x10),uVar1))();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004031f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + -0x10))();
  return;
}


