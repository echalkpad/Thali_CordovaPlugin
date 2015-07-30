//
//  The MIT License (MIT)
//
//  Copyright (c) 2015 Microsoft
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//
//  Thali CordovaPlugin
//  THEPeerNetworkingDelegate.h
//

// Forward declarations.
@class THEPeerNetworking;

// THEPeerNetworkingDelegate protocol.
@protocol THEPeerNetworkingDelegate <NSObject>
@required

// Notifies the delegate that a peer was found.
- (void)peerNetworking:(THEPeerNetworking *)peerNetworking
 didFindPeerIdentifier:(NSString *)peerIdentifier
              peerName:(NSString *)peerName;

// Notifies the delegate that a peer was lost.
- (void)peerNetworking:(THEPeerNetworking *)peerNetworking
 didLosePeerIdentifier:(NSString *)peerIdentifier;

// Notifies the delegate that the peer networking client is connecting to the specified peer networking server.
- (void)peerNetworking:(THEPeerNetworking *)peerNetworking
connectingToPeerServerWithPeerIdentifier:(NSString *)peerIdentifier;

// Notifies the delegate that the peer networking client is connected to the specified peer networking server.
- (void)peerNetworking:(THEPeerNetworking *)peerNetworking
connectedToPeerServerWithPeerIdentifier:(NSString *)peerIdentifier;

// Notifies the delegate that peer networking client is not connected to the specified peer networking server.
- (void)peerNetworking:(THEPeerNetworking *)peerNetworking
notConnectedToPeerServerWithPeerIdentifier:(NSString *)peerIdentifier;

// Notifies the delegate that the specified peer networking client is connecting to the peer networking server.
- (void)peerNetworking:(THEPeerNetworking *)peerNetworking
peerClientConnectingWithPeerIdentifier:(NSString *)peerIdentifier;

// Notifies the delegate that the specified peer networking client is connected to the peer networking server.
- (void)peerNetworking:(THEPeerNetworking *)peerNetworking
peerClientConnectedWithPeerIdentifier:(NSString *)peerIdentifier;

// Notifies the delegate that the specified peer networking client is not connected to the peer networking server.
- (void)peerNetworking:(THEPeerNetworking *)peerNetworking
peerClientNotConnectedWithPeerIdentifier:(NSString *)peerIdentifier;

@end
