
/* ==== FUN_004a3570 @ 004a3570 ==== 
 * signature: bool __stdcall FUN_004a3570(int param_1, int param_2)
 * body: 004a3570-004a3595
 */

bool FUN_004a3570(int param_1,int param_2)

{
  return (bool)('\x01' - ((*(uint *)(*(int *)(param_1 + 0xb0) + 0x20) &
                          *(uint *)(*(int *)(param_2 + 0xb0) + 0x20)) != 0));
}


