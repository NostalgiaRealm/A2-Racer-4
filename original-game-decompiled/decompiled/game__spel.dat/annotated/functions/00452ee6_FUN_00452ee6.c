
/* ==== FUN_00452ee6 @ 00452ee6 ==== 
 * signature: undefined __stdcall FUN_00452ee6(int param_1)
 * body: 00452ee6-00452eef
 */

void FUN_00452ee6(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 auStack_200 [512];
  
  FUN_004a02e0((int)auStack_200);
  iVar3 = param_1 * 0xf0;
  iVar2 = *(int *)(iVar3 + 0x24 + DAT_00715e50);
  iVar1 = DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8;
  fStack_20c = *(float *)(DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8);
  uStack_208 = *(undefined4 *)(iVar1 + 4);
  uStack_204 = *(undefined4 *)(iVar1 + 8);
  FUN_004a79d0(param_1,0,0,0,0,0,0,2000.0,0.9,0.0,'\0',FUN_004544c0,'\0',1);
  FUN_004a7190(param_1);
  FUN_004a02f0(auStack_200,*(int *)(iVar3 + 0x10 + DAT_00715e50),&fStack_20c,(float *)0x0,3,0);
  (**(code **)(**(int **)(iVar3 + 0x10 + DAT_00715e50) + 8))(auStack_200);
  return;
}


