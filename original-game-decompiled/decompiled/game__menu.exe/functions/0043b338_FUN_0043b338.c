
/* ==== FUN_0043b338 @ 0043b338 ==== 
 * signature: undefined1 __register FUN_0043b338(int * param_1, int * param_2)
 * body: 0043b338-0043b3f6;0043b41b-0043b424
 */

undefined1 FUN_0043b338(int *param_1,int *param_2)

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
    puStack_20 = (undefined1 *)0x43b350;
    iVar2 = FUN_0043a91c(param_1);
    puStack_20 = (undefined1 *)0x43b359;
    iVar3 = FUN_0043a91c(param_2);
    if (iVar2 == iVar3) {
      puStack_20 = (undefined1 *)0x43b36d;
      iVar2 = FUN_0043a91c(param_1);
      uVar6 = extraout_ECX;
      if (iVar2 == 0) {
        puStack_20 = (undefined1 *)0x43b378;
        iVar2 = FUN_0043a91c(param_2);
        uVar6 = extraout_ECX_00;
        if (iVar2 == 0) {
          return 1;
        }
      }
      puStack_20 = (undefined1 *)0x43b391;
      piVar4 = (int *)FUN_00402f6c((int *)&PTR_TMemoryStream_vmt_000_0040f194,'\x01',uVar6);
      pcStack_24 = thunk_FUN_004036bc;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      pcStack_2c = (code *)0x43b3ac;
      puStack_20 = &stack0xfffffffc;
      FUN_0043b878(param_1,(int)piVar4);
      pcStack_2c = (code *)0x43b3b8;
      piVar5 = (int *)FUN_00402f6c((int *)&PTR_TMemoryStream_vmt_000_0040f194,'\x01',extraout_ECX_01
                                  );
      pcStack_30 = thunk_FUN_004036bc;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      pcStack_2c = (code *)&stack0xfffffffc;
      FUN_0043b878(param_2,(int)piVar5);
      FUN_0043b2f8(piVar4,piVar5);
      *in_FS_OFFSET = uStack_34;
      pcStack_2c = FUN_0043b3fe;
      pcStack_30 = (code *)0x43b3f6;
      uVar1 = FUN_00402f9c(piVar5);
      return uVar1;
    }
  }
  return 0;
}


