
/* ==== TMediaPlayer.dyn_0005 @ 004a1dd8 ==== 
 * signature: undefined TMediaPlayer.dyn_0005(void)
 * body: 004a1dd8-004a1e63
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TMediaPlayer_dyn_0005(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  TWinControl_dyn_0005(param_1,param_2);
  if ((*(byte *)(param_1 + 8) & 0x40) == 0) {
    iVar2 = FUN_004a1d88(param_1);
    iVar3 = (param_1[0xaa] + -1) * iVar2 + 1;
    iVar1 = param_1[0xab];
    iVar4 = (param_1[0xe] + -1) / iVar2;
    param_1[0xa9] = iVar4 + 1;
    iVar2 = iVar4 * iVar2 + 1;
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    iVar4 = iVar1;
    if (iVar1 <= param_1[0xf]) {
      iVar4 = param_1[0xf];
    }
    if ((iVar2 != param_1[0xe]) || (iVar4 != param_1[0xf])) {
      (**(code **)(*param_1 + 0x7c))
                (param_1,param_1[0xc],param_1[0xd],iVar4,iVar2,param_2,iVar3,iVar1);
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}


