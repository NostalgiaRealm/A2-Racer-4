
/* ==== FUN_00430c58 @ 00430c58 ==== 
 * signature: undefined1 __register FUN_00430c58(int * param_1, int * param_2)
 * body: 00430c58-00430d16;00430d3b-00430d44
 */

undefined1 FUN_00430c58(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  
  if (param_2 != (int *)0x0) {
    puStack_20 = (undefined1 *)0x430c70;
    iVar2 = FUN_00430464(param_1);
    puStack_20 = (undefined1 *)0x430c79;
    iVar3 = FUN_00430464(param_2);
    if (iVar2 == iVar3) {
      puStack_20 = (undefined1 *)0x430c8d;
      iVar2 = FUN_00430464(param_1);
      uVar6 = extraout_ECX;
      if (iVar2 == 0) {
        puStack_20 = (undefined1 *)0x430c98;
        iVar2 = FUN_00430464(param_2);
        uVar6 = extraout_ECX_00;
        if (iVar2 == 0) {
          return 1;
        }
      }
      puStack_20 = (undefined1 *)0x430cb1;
      piVar4 = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_vmt_000_0040df58,'\x01',uVar6);
      pcStack_24 = thunk_FUN_00403434;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      pcStack_2c = (code *)0x430ccc;
      puStack_20 = &stack0xfffffffc;
      FUN_00431198(param_1,(int)piVar4);
      pcStack_2c = (code *)0x430cd8;
      piVar5 = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_vmt_000_0040df58,'\x01',extraout_ECX_01
                                  );
      pcStack_30 = thunk_FUN_00403434;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      pcStack_2c = (code *)&stack0xfffffffc;
      FUN_00431198(param_2,(int)piVar5);
      FUN_00430c18(piVar4,piVar5);
      *in_FS_OFFSET = uStack_34;
      pcStack_2c = FUN_00430d1e;
      pcStack_30 = (code *)0x430d16;
      uVar1 = FUN_00402d14(piVar5);
      return uVar1;
    }
  }
  return 0;
}


