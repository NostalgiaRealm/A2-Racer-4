
/* ==== TWinControl.dyn_ffd6 @ 00429c18 ==== 
 * signature: undefined TWinControl.dyn_ffd6(void)
 * body: 00429c18-00429c78
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined1 TWinControl_dyn_ffd6(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uStack_10;
  
  uVar1 = TControl_dyn_ffd6(param_1,param_2,param_3);
  uStack_10._0_2_ = CONCAT11(uVar1,(char)param_2);
  uStack_10 = (uint)(ushort)uStack_10;
  if (*(char *)((int)param_1 + 0x47) != '\0') {
    iVar3 = FUN_0042781c((int)param_1);
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      do {
        if (((byte)uStack_10 & uStack_10._1_1_) != 0) break;
        piVar4 = (int *)FUN_004277e0((int)param_1,iVar3);
        bVar2 = FUN_00402ef0(piVar4,CONCAT31((int3)((uint)extraout_EDX >> 8),(byte)uStack_10),
                             extraout_ECX);
        uStack_10._0_2_ = CONCAT11(bVar2 | uStack_10._1_1_,(byte)uStack_10);
        uStack_10 = (uint)(ushort)uStack_10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
  }
  return uStack_10._1_1_;
}


