
/* ==== FUN_00463210 @ 00463210 ==== 
 * signature: undefined __cdecl FUN_00463210(float * param_1, int param_2)
 * body: 00463210-004632d1
 */

void __cdecl FUN_00463210(float *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  float local_c [3];
  
  iVar2 = DAT_006c3530 * 0x178;
  FUN_004b1260((int)(iVar2 + (int)DAT_00719b50));
  FUN_004b1310((int)((int)DAT_00719b50 + iVar2));
  *(undefined4 *)(iVar2 + 0x80 + (int)DAT_00719b50) = 0;
  FUN_00438410(6);
  puVar1 = (undefined4 *)
           FUN_00464540(local_c,(int)param_1,*(int *)(param_2 + 4),0,*(float *)(param_2 + 0xc),
                        *(int *)(param_2 + 0x20));
  FUN_004b1060((void *)((int)DAT_00719b50 + iVar2),*puVar1,puVar1[1],puVar1[2]);
  this = (void *)(iVar2 + (int)DAT_00719b50);
  puVar1 = (undefined4 *)FUN_004b12c0(DAT_00719b50,local_c);
  FUN_004b1290(this,*(undefined4 *)(param_2 + 0x10),*puVar1,puVar1[1],puVar1[2]);
  return;
}


