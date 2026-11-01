
/* ==== TMemoryStream.vmt_010 @ 00410ed4 ==== 
 * signature: LPCVOID __register TMemoryStream.vmt_010(int param_1, SIZE_T * param_2)
 * body: 00410ed4-00410f55
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

LPCVOID TMemoryStream_vmt_010(int param_1,SIZE_T *param_2)

{
  int *piVar1;
  LPCVOID pvVar2;
  LPCVOID extraout_ECX;
  
  if (0 < (int)*param_2) {
    *param_2 = *param_2 + 0x1fff & 0xffffe000;
  }
  pvVar2 = *(LPCVOID *)(param_1 + 4);
  if (*param_2 != *(SIZE_T *)(param_1 + 0x10)) {
    if (*param_2 == 0) {
      FUN_004069b4(pvVar2);
      pvVar2 = (LPCVOID)0x0;
    }
    else {
      if (*(SIZE_T *)(param_1 + 0x10) == 0) {
        pvVar2 = (LPCVOID)FUN_00406988((uint)*(ushort *)PTR_DAT_00446ce8,*param_2);
      }
      else {
        pvVar2 = (LPCVOID)FUN_00406998(pvVar2,*param_2,(uint)*(ushort *)PTR_DAT_00446ce8);
      }
      if (pvVar2 == (LPCVOID)0x0) {
        piVar1 = FUN_0040a9f4((int *)&DAT_0040d4b4,'\x01',(undefined4 *)PTR_PTR_00446d54);
        FUN_0040346c(piVar1);
        pvVar2 = extraout_ECX;
      }
    }
  }
  return pvVar2;
}


