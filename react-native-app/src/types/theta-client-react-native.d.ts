declare module 'theta-client-react-native' {
  export function initialize(url: string, config?: any): Promise<void>;
  export function getThetaInfo(): Promise<any>;
  // Add other functions you use from the module
}