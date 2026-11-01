
/* ==== __fload_withFB @ 0055e265 ==== 
 * signature: uint __fastcall __fload_withFB(undefined4 param_1, int param_2)
 * body: 0055e265-0055e2a7
 * note: Library Function - Single Match  __fload_withFB  Library: Visual Studio
 */

/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fastcall __fload_withFB(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(param_2 + 4);
}


