
/* ==== FUN_004029f0 @ 004029f0 ==== 
 * signature: undefined __register FUN_004029f0(int param_1, int * param_2)
 * body: 004029f0-00402a46
 */

void FUN_004029f0(int param_1,int *param_2)

{
  DWORD DVar1;
  byte *pbVar2;
  CHAR local_114 [264];
  
  if (param_1 == 0) {
    DVar1 = GetModuleFileNameA((HMODULE)0x0,local_114,0x105);
    FUN_00403d44(param_2,(undefined4 *)local_114,DVar1);
  }
  else {
    pbVar2 = (byte *)GetCommandLineA();
    while( true ) {
      pbVar2 = FUN_00402918(pbVar2,param_2);
      if ((param_1 == 0) || (*param_2 == 0)) break;
      param_1 = param_1 + -1;
    }
  }
  return;
}


