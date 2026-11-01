
/* ==== __break @ 0040305f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040305f-0040305f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


