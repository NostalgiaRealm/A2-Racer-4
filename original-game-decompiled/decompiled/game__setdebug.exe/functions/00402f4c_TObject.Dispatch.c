
/* ==== TObject.Dispatch @ 00402f4c ==== 
 * signature: undefined TObject.Dispatch(void)
 * body: 00402f4c-00402f71
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
    FUN_00402ec0(*param_1);
    if (!bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00402f6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)CONCAT22((short)((uint)unaff_EBX >> 0x10),uVar1))();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00402f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + -0x10))();
  return;
}


