1) GCD 복잡도

<img width="1764" height="784" alt="10" src="https://github.com/user-attachments/assets/60bb1961-757e-4241-a92b-44efcd39ec55" />
<img width="1749" height="780" alt="100" src="https://github.com/user-attachments/assets/2c318490-ab45-4184-ad7d-4bfd3a7d1354" />
<img width="1761" height="776" alt="1000" src="https://github.com/user-attachments/assets/3d081e94-ff24-4453-b72f-b761b38b411a" />
<img width="1761" height="773" alt="10000" src="https://github.com/user-attachments/assets/922df7b4-317d-43a4-b0e5-4df7e726d60d" />
<img width="1755" height="773" alt="100000" src="https://github.com/user-attachments/assets/e849dc81-1bfd-418d-b29c-889cdf0d527d" />
<img width="1762" height="773" alt="1000000" src="https://github.com/user-attachments/assets/c7e92af8-8f6f-454a-95c5-66cef5fb543e" />
<img width="1758" height="774" alt="10000000" src="https://github.com/user-attachments/assets/9a33edfe-90f1-4d8e-8836-fbbd28cb4341" />

위에서 부터 10^n 승의 값을 0 ~ 10^n - 1 값 까지의 수로 최대공약수를 찾았을 때 걸리는 시간을 나타낸 것이다 

이를 그래프로 나타내보자.

<img width="1249" height="711" alt="그래프" src="https://github.com/user-attachments/assets/6f801a76-09e0-4aed-8cce-dcb15003b8b6" />
처음 10^1의 값과 10^7의 값을 비교하면 단위는 약 백만배(10,000,000%) 증가하였지만, 결과 값의 비율은 약 50% 정도로 밖에 증가하였다.

즉 이 GCD함수의 시간 복잡도는 O(log n)로 볼 수 있다.

과제 2에서 확인 하였듯이 최선의 시간 복잡도는 a % b가 0인 경우인 O(1)
최악의 경우는 피보나치 수열이 나머지를 결정하는 경우인 log(n) 가 있다.
