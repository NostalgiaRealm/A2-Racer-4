
/* ==== FUN_00402888 @ 00402888 ==== 
 * signature: undefined __register FUN_00402888(int param_1, int * param_2)
 * body: 00402888-004028de
 */

void FUN_00402888(int param_1,int *param_2)

{
  DWORD DVar1;
  byte *pbVar2;
  CHAR local_114 [264];
  
  if (param_1 == 0) {
    DVar1 = GetModuleFileNameA((HMODULE)0x0,local_114,0x105);
    FUN_00403aa0(param_2,(undefined4 *)local_114,DVar1);
  }
  else {
    pbVar2 = (byte *)GetCommandLineA();
    while( true ) {
      pbVar2 = FUN_00402810(pbVar2,param_2);
      if ((param_1 == 0) || (*param_2 == 0)) break;
      param_1 = param_1 + -1;
    }
  }
  return;
}


