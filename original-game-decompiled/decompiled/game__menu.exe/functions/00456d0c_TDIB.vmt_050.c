
/* ==== TDIB.vmt_050 @ 00456d0c ==== 
 * signature: undefined TDIB.vmt_050(void)
 * body: 00456d0c-00456db6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDIB_vmt_050(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  short asStack_16 [7];
  int *piStack_8;
  
  pcStack_2c = (code *)&stack0xfffffffc;
  puStack_20 = (undefined4 *)0x0;
  puStack_1c = (undefined4 *)0x0;
  pcStack_30 = thunk_FUN_004036bc;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  piStack_8 = param_2;
  iVar1 = (**(code **)(*param_2 + 4))(param_2,asStack_16,0xe);
  if (iVar1 != 0) {
    if (iVar1 != 0xe) {
      FUN_00405808((undefined4 *)PTR_PTR_004ab8a0,(int *)&puStack_1c);
      piVar2 = FUN_0040b5d8((int *)&DAT_00416698,'\x01',puStack_1c);
      FUN_004036f4(piVar2);
    }
    if (asStack_16[0] != 0x4d42) {
      FUN_00405808((undefined4 *)PTR_PTR_004ab8a0,(int *)&puStack_20);
      piVar2 = FUN_0040b5d8((int *)&DAT_00416698,'\x01',puStack_20);
      FUN_004036f4(piVar2);
    }
    (**(code **)(*param_1 + 0x30))(param_1,piStack_8);
  }
  *in_FS_OFFSET = uStack_34;
  pcStack_2c = FUN_00456dbe;
  pcStack_30 = (code *)0x456db6;
  FUN_00403c80((int *)&puStack_20,2);
  return;
}


